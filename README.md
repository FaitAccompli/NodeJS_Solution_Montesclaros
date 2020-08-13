[howto]
run node-gyp rebuild and then node ./addon.js 
[test]
run npm run test


The unit tests done using jest.
1) For the enumeration of the attached displays, the value should not be equal to 0 to pass. This means that a non-zero positive value means attached displays were found.
2) For the last input time, the value should be any number, this was quite difficult for me since the input time varies.
3) For the sleep request, the value should be 1, meaning the message was sent successfully via SendMessage() 
4) For the wake request, the value should also be 1 meaning the MOUSEEVENTF_MOVE was invoked.
