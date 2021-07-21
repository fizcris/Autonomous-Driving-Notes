# ISO 26262 

The most generic standard is IEC 61508, which originated from industrial markets. It currently exists as a standard in the IEC/ISO basic safety publication, which covers "general functional safety," for a number of industries. ISO 26262 specifically applies to automotive passenger vehicle electrical and electronic systems. The ISO 26262 standard is an offshoot of the IEC 61508 standard.

Functional safety, which only looks at electrical and electronic system malfunctions, is just one part of overall vehicle safety.

Nominal performance issues can still lead to safety problems, but nominal performance is not part of the functional safety standard.

Avoiding software errors is a big part of functional safety! While the other choices are also really important for ensuring automative safety, they would not fall under the ISO 26262 functional safety standard. The functional safety standard only considers electrical and electronic system malfunctions.

***

## The Basics of Functional Safety: Review
1. Identify hazards in a passenger vehicle's electronic or electric system that could cause physical injury or damage to a person's health
2. Evaluate the risk of the hazardous situation so that we know how much we need to lower the risk
3. Via systems engineering, prevent accidents from occurring by lowering risk to reasonable levels. Systems engineering helps you figure out what your vehicle needs to do and what your vehicle design needs to look like in order to remain safe.
***
**Functional safety focuses on keeping risks below society's current threshold.**

* Eliminating all risks would paralyze engineering, product development and testing.
    * In the end, every company has to decide for itself how much risk to eliminate from its products.
***

* Functional requirements - what your system is supposed to do; in other words, the system's functions.
    * Functional requirements generally have the form X system shall do Y. For example, "The turn signal system shall turn on an indicator light telling the driver that the system is active".

<br />

* Non-functional requirements - how the system should behave: for example, how reliable is the system?
    * Non-functional requirements have the form X system shall be Y. As an example: "The turn signal system shall be available when the vehicle ignition switch is in the on position".


Risk standarts:

* [Ford Pinto Incendiary fuel tanks on rear colisions](https://en.wikipedia.org/wiki/Ford_Pinto#Fuel_system_fires.2C_recalls.2C_and_litigation)
* [Prius software recall brakes](https://en.wikipedia.org/wiki/2009%E2%80%9311_Toyota_vehicle_recalls#Anti-lock_brake_software_recall)

***
## Human error

Human error is especially important in the auto industry. In the United States, the National Highway and Transportation Safety Administration estimates that 94% of car accidents involve human error.

The European Union also estimates about 90% of vehicular accidents involve human error.

## Technology  error

The rocket exploded because the Ariane 5 required a 64-bit floating point value whereas the original software expected a 16-bit signed integer.

Software bugs are a major source of technology error throughout many industries including the car industry. An internet search of software bugs cars will give you a sense of how serious the issue is.


## Human-Technology Interaction Error

And finally, let's discuss how human-technology interaction causes accidents. Back in 2013, Asiana Flight 214 crashed when landing in San Francisco. A pilot selected an incorrect autopilot mode and inadvertently switched off the auto throttle function. The plane came in for landing at a very low speed and low altitude.


## Errors and Self-Driving Cars
One of the aims of self-driving cars is to take humans completely out of the equation. The trade-off is that autonomous vehicle could introduce more technology errors.

Take a machine learning algorithm as an example. What happens if a pedestrian training set does not include pedestrians in wheelchairs? The system would not count a pedestrian in a wheelchair. How accurate do our results need to be on a validation set? Who determines what the training set needs to contain?

Autonomous vehicle technology is so new that standards like ISO 26262 do not yet even consider certain issues related to self-driving cars such as machine learning algorithms. But the principles of functional safety, which uses systems engineering to identify and lower risks, apply to autonomous vehicles as well!

Please note that the example above addresses nominal performance, which is more related to Safety of the Intended Function (SOTIF) then FuSa. The ISO 26262 committee is authoring a sister specification, ISO 21448, to address nominal performance.


## ASIL (Automotive Safety Integrity Level)
The ISO 26262 standard defines a risk factor called ASIL - Automotive Safety Integrity Level. ASIL is a four point scale of ASIL A, ASIL B, ASIL C and ASIL D.

ASIL D represents a hazardous situation with the highest risk whereas ASIL A represents lower risk. ASIL is a key term in automotive functional safety. The video introduced the basic ideas behind how to calculate ASIL, but we will leave the details for the Hazard Analysis and Risk Assessment Lesson.

QM stands for quality managed. QM means that development according to accepted quality principles is sufficient to reduce risk.

**risk = probability of occurrence x severity**

Lane assistance technology is relatively new in the automotive world. A lane assistance system generally has two functions:

* lane departure warning
* lane keeping assistance

## Engineering Requirements and the ISO 26262 Standard

ISO 26262 only covers electronic and electrical malfunctions in passenger vehicle systems. The standard provides a framework for reducing risks that could harm people's health.

### Safety plan
The safety plan gives an overview of how you are going to achieve a safe system. A few of the major elements include:

* what system is under consideration
* the goal of the project
* what steps will be taken to ensure safety
* the roles and personnel involved in the project
* the project timeline

### Defining a system at the Item level
Specifies which vehicle system is being considered, the system boundaries and background information about the system.

### Hazard Analysis and Risk Assessment
This is where we brainstorm to imagine hazards where the system malfunctions and causes injury or harm. Then the risk is calculated for each hazardous scenario.

### Functional Safety Concept

High level overview of the system. Based on the hazard analysis and risk assessment, you figure out what your system is required to do to stay safe. Then you identify what part of your system will need to be adjusted to take into account the new functionality.

### Technical Safety Concept at the System Level

 While the functional safety concept gives a high level overview of the system and what it needs to do, the technical safety concept gets into more detail. So whereas the functional safety concept might give a high level requirement like "the lane warning departure steering wheel vibration should be limited", the technical safety concept will discuss how electronic signals and control units need to behave in order to limit the steering wheel vibration.


**ISO 26262 compliance is not legally required** But most if not all automotive companies and automotive parts suppliers strive to make their products compliant with the standard.

***
A fault can lead to a failure, which is synonymous with a malfunction. Failure means that the system has stopped working properly. The system is no longer doing what it is supposed to do.

A failure could lead to a hazard. A hazard is a situation that could cause injury to a person or harm a person's health. If a system fails, the situation is potentially hazardous. Not all failures are necessarily hazardous, which means hazards have different levels of risk.

Risk measures the level of danger in a situation. An example of a high risk situation is one that it is likely to happen and also cause serious injury.

***







***
