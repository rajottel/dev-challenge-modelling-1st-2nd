mdl = 'SparkEV';
open_system(mdl);

%%

%Test 1 
in(1) = Simulink.SimulationInput(mdl); 
in(1) = setParamforManeuverAndDriver('SparkEV','Drive Cycle', 'FTP75', 'Longitudinal Driver',1,in(1),6);

%%

%Test 2 
in(2) = Simulink.SimulationInput(mdl); 
in(2) = setParamforManeuverAndDriver('SparkEV','Drive Cycle', 'US06', 'Longitudinal Driver',2,in(2),6);

%%

%Test 3 
in(3) = Simulink.SimulationInput(mdl); 
in(3) = setParamforManeuverAndDriver('SparkEV','Drive Cycle', 'HWFET', 'Longitudinal Driver',3,in(3),6);

%%

%Test 4 
in(4) = Simulink.SimulationInput(mdl); 
in(4) = setParamforManeuverAndDriver('SparkEV','Drive Cycle', 'UDDS', 'Longitudinal Driver',4,in(4),6);
out = parsim(in, 'ShowSimulationManager', 'on');
