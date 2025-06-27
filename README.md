# GEANT4sims
Library of GEANT-4 (G4) simulations I have created
After G4 has been fully installed, if the computer cannot locate necessary library files, use the following command before running executables (Linux):
export LD_LIBRARY_PATH=$HOME/GEANT4/geant4-v11.3.2-install/lib:$HOME/VTK/vtk/vtk-install/lib:$LD_LIBRARY_PATH
In my experience, I have to run this each time I open the command prompt
To use these simulations, simply download the respective folders and make sure the folder is in the same directory as the folder that contains your main GEANT4 folder, VTK, and any other libraries.
