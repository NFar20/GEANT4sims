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
## uclatpc_CAD
- This project models the same TPC as the previous one, except every part was imported as a CAD file via the "CADMesh.hh" header file developed by Christopher Poole
- While CAD files can be easier to implement than manually designing geometries in C++, they increase the launch time for G4 and are attached to an irregular coordinate system, making it difficult and tedious to build geometries without overlaps
- The CAD imports also seem to be imperfect in some cases, which can cause issues in certain simulations
- CADmesh only works with ASCII .STL files, which all have names beginning with "A" and can be found in the uclatpc_CAD directory; the other files in this directory are binary STL files
- Note that all of the code in this project is the same as the previous one, except for the "construction.cc" file
## future steps
- The UCLA simulations both currently have issues modeling electron drift due to the way G4 handles electrons in an electric field, but these should hopefully be resolved soon
- The final goal of these simulations is to visualize them in virtual reality using the G4VR app developed by Benjamin Jobilal
- This will be one of the first simulations used to test G4VR
