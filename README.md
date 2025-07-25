# GEANT4 Simulations
- Library of GEANT-4 (G4) simulations I have created  
- After G4 has been fully installed, if the computer cannot locate necessary library files, use the following command before running executables (Linux):  
  export LD_LIBRARY_PATH=$HOME/GEANT4/geant4-v11.3.2-install/lib:$HOME/VTK/vtk/vtk-install/lib:$LD_LIBRARY_PATH  
- In my experience, I have to run this each time I open the command prompt  
- To use these simulations, simply download the respective folders and make sure the folder is in the same directory as the folder that contains your main GEANT4 folder, VTK, and any other libraries.
## sim
- This project is in the process of being created by following the G4 tutorial YouTube playlist from Physics Matters
- The main goal was to help me get acustomed to using G4
## uclatpc
- This project is still in progress and will be created with the help of existing literature on G4 and CAD files of the TPC used by the Kamaha group at UCLA
- The goal of this project is to create a simulation of the TPC prototype in Prof. Kamaha's lab at UCLA to eventually be implemented in G4VR as part of my research project for the Summer 2025 UCLA REU
## future steps
- I am currently working on a simulation of the TPC that only uses CAD files for the geometry imported using the CADMesh.hh header file designed by Christopher Poole
- The CAD files I am using can be found in the "UCLA TPC Parts" directory
- CADmesh only works with ASCII .STL files, which all have names beginning with "A"; the other files in this directory are binary STL files
