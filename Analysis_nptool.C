

void Analysis_nptool(){

    ROOT::EnableImplicitMT(24);
    time_t start = time(NULL);

    TFile *filein = new TFile("/home/sghwang/workspace/nptool/Outputs/Simulation/temp.root","read");
    //TFile *filein = new TFile("/home/sghwang/workspace/nptool/Outputs/Simulation/result_240717.root","read");
    TTree *tree = (TTree*)filein->Get("SimulatedTree");
    
    int eventnum = tree->GetEntries();
    TTPCDRUMData *data = new TTPCDRUMData();
    tree->SetBranchAddress("TPCDRUM",&data);
    TCanvas *c1 = new TCanvas("c1","c1",1200,800);
    // TH1D *loss_energy = new TH1D("loss_energy","^{20}Ne Beam Energy Loss in Gas; Energy Loss [MeV]; Count",60,1,200);
    // TF1 *fitgaus = new TF1("fitgaus","gaus");
    auto lat = new TLatex();
    TH2D *dEdX_hist = new TH2D("Energy_Loss","dE/dx;Energy/u [MeV]; dE/dx [MeV/mm]",400,0,10,400,0,0.5);

    cout << eventnum << endl;

    double Energy = 0;
    double x,y,z;
    double dx;
    double dE;
    cout.precision(4);
    for(int event = 0 ; event < eventnum; event++){
        if(event%1333==0)cout<< "[ "<< (double)event/(double)eventnum *100<< "% ]  Processing...        \r" << flush;
        tree->GetEntry(event);

        int interaction_Size = data->GetDataMult();
        for(int i = 0 ; i < interaction_Size-1 ; i++){
            
            if(data->GetDataIndex(i) == data->GetDataIndex(i+1)){
                dE = data->GetDataEnergyDeposit(i);
                dx = data->GetDataStepLength(i);
                Energy = data->GetDataEnergy(i);

                // cout << dx << endl;

                //  dEdX_hist->Fill(Energy,dE/dx);
               dEdX_hist->Fill(Energy/(data->GetDataMaterial(i)/931.),dE/dx);
            
            }
        }
 
        
           
    }
    cout << "Process Complete, Elapsed Time : " << time(NULL) - start <<" seconds"<< endl;

    
    gStyle->SetOptStat(0);
    c1->cd();



    dEdX_hist->GetZaxis()->SetRangeUser(0.01,1000);
    dEdX_hist->Draw("colZ");
    // loss_energy->Draw();
    // loss_energy->Fit("fitgaus","Q");
    // double mean = fitgaus->GetParameter(1);
    // double sigma = fitgaus->GetParameter(2);

    // fitgaus->SetRange(mean-3*sigma,mean+3*sigma);
    // loss_energy->Fit("fitgaus","RQ");

    lat -> Clear();
    lat ->SetTextSize(0.03);
    // lat -> DrawLatexNDC(0.6,0.85,"200 MeV^{20}Ne Beam");
    // lat -> DrawLatexNDC(0.6,0.8,"^{4}He(90%)+CO_{2}(10%)");
    // lat -> DrawLatexNDC(0.6,0.75,"760 Torr");
    
}
