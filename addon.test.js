//addon.test.js 

const addon = require('./addon');

describe('Display Manager Test', () =>{
	test('Enumerate the attached displays ', () => {
  		expect(addon.printAttachedDisplays()).not.toBe(0);
	});

	test('Return last input time ', () => {
	  expect(isNaN(addon.returnLastInputTime())).toBe(false);

	});


	test('Request the displays to sleep ', () => {
		expect(addon.requestSleep()).toBe(1); 

	});


	test('Request the displays to wake', () =>{
		expect(addon.requestWake()).toBe(1); 

	});


});













