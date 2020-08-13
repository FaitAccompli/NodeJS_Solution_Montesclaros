const addon = require('./build/Release/addon');

function printAttachedDisplays() {
	// console.log("Attached Displays: "+ addon.enumAttachedDisplays());
   	return addon.enumAttachedDisplays();
}

function requestSleep() {
	return addon.reqDisplayToSleep();

}

function requestWake() {

	return addon.reqDisplayToWake(); 


}

function returnLastInputTime() {
	var lastInput_ticks = addon.getLastInputTime(); 
	var lastInput_seconds = lastInput_ticks * 1e-7 ; 

	// console.log("Last Input Time: \n" + "In ticks = " + lastInput_ticks
    //                       + ", In seconds: " + lastInput_seconds); 
 	return (lastInput_seconds); 

}



// printAttachedDisplays(); 
// returnLastInputTime(); 

module.exports = { 
	printAttachedDisplays, 
	returnLastInputTime, 
	requestSleep,
	requestWake
}


