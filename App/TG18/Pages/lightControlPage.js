var Observable = require("FuseJS/Observable");
var lightButtons = require("../Assets/JavaScript/buttons");

var lightButtonsObs = Observable();
lightButtonsObs.replaceAll(lightButtons)

module.exports = {
	lightButtonsObs: lightButtonsObs
}