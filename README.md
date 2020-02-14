# ROB301 - Modèle et génération automatique de code pour les logiciels embarqués

This repository contains the project for the course ROB301 at ENSTA-Paris.

We have reported here the **SCADE files** where we have implemented the requested operators, the **scenarios** used in order to test the operators, the results of the **tests** that we have implemented and the **report** that will explain the different operators.

The project focused on the implementation of the control software for a landing system.
We focused ourself in the implementation of the digital part that has the aim to receive informations from different sensors on the status of the different part of the system and to create signals in order to activate several electro-valves and inform the pilot about the health of the system. 

We have realised several blocks that guarantee the correct functioning of the system as reported in the project description: the gear outgoing sequence and the gear retraction sequence, the monitoring about the health of the system with the report of an anomalies in case of problems.

We have also considered the time constraints reported in the project description.

## SCADE files

In order to open the project it is necessary to open the file **ROB301_BRAMBILLA_GOMES** that will launch SCADE with all the operators implemented. By clicking on the different operators it will be possible to see the diagrams and the state machines associated.

The file **Total Model** contains the implementation of the total model that uses all the operators precedently implemented.

## Scenarios

We have implemented 6 different **scenarios** in order to test the validity of these operators:
1. **FullCoverage_SensorValidity**: three different scenarios to test the three different case.
2. **FullCoverage_AnalogicalSwitchMonitoring**
3. **FullCoverage_PressionSensorMonitoring**
4. **FullCoverage_DoorsMotionMonitoring**
5. **FullCoverage_GearsMotionMonitoring**
6. **FullCoverage_ComputingModel**

These scenarios has the aim to **cover all the different possibilities** and the assure that the operators are working well.

## Tests

For the **test files**, we have reported the results for the six scenarios previously proposed.
We will have one file of test for each of the operator implemented:
1. **SensorValidity.htm**: obtained after the run of the three scenarios
2. **AnalogicalSwitch.htm**
3. **PressionSensor.htm**
4. **DoorsMonitoring.htm**
5. **GearsMotion.htm**
6. **ComputingModel.htm**

For the tests, we have reduced the time related to the requested functioning of the controller in order to be able to make **faster** simulations. We have kept the same rate among the different times in a same operator in order not to affect the global behavior.

## Report

Finally, we have reported the **report** where all the figures of the blocks have been exported and some comments have been written in order to explain the aim of the operators and their functions.# ROB301
