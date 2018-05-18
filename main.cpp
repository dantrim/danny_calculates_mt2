//std/stl
#include <iostream>
#include <string>
using namespace std;

//ROOT
#include "TLorentzVector.h"

//MT2
#include "MT2_ROOT.h"


int main(int argc, char* argv[])
{
    std::cout << "danny calculates mt2!" << std::endl;

    // build your visible legs
    // each of the two sides can be a system of objects,
    // they do not necessarily need to be a single thing
    TLorentzVector vis_A;
    vis_A.SetPtEtaPhiM(100., 1.2, 0, 125.);

    TLorentzVector vis_B;
    vis_B.SetPtEtaPhiM(100., -1.2, 0, 125.);

    TLorentzVector met;
    met -= vis_A;
    met -= vis_B;
    met.SetPz(0.0);

    cout << "visibile leg for side A : (pT, eta, phi, M) = (" << vis_A.Pt()
                << ", " << vis_A.Eta() << ", " << vis_A.Phi() << ", " << vis_A.M() << ")" << endl;
    cout << "visibile leg for side B : (pT, eta, phi, M) = (" << vis_B.Pt()
                << ", " << vis_B.Eta() << ", " << vis_B.Phi() << ", " << vis_B.M() << ")" << endl;
    cout << "missing transverse momentum : (px, py, magnitude, phi) = (" << met.Px()
                << ", " << met.Py() << ", " << met.Mag() << ", " << met.Phi() << ")" << endl;

    // initialize the MT2 calculator with the two sides (can
    // be asymmetric) of your decay and the MET
    ComputeMT2 mt2_calculator = ComputeMT2(vis_A, vis_B, met);
    cout << " >> mt2 = " << mt2_calculator.Compute() << endl;
                
    

    return 0;
}
