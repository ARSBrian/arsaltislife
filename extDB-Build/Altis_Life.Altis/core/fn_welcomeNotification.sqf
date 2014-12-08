/*
	File: fn_welcomeNotification.sqf

	Description:
	Called upon first spawn selection and welcomes our player.
*/
format["Welcome %1, Please read the following as it is important!",profileName] hintC
[
	"PLEASE NOTE THAT THIS SERVER IS STILL UNDER DEVELOPMENT!",
	"THIS MEANS THERE MAY BE UNEXPECTED RESTARTS! WE AS ADMINS WILL DO OUR BEST TO LET YOU KNOW BEFORE THE SERVER IS RESTARTED SO YOU HAVE TIME TO SYNC YOUR DATA!",
	"",
	"An interaction key has been introduced which replaces the large majority of scroll wheel actions, this was for performance issues. By default this key is [Left Windows], you can change this key by pressing ESC and going to Configure->Controls->Custom
	and bind 'Use Action 10' to a single key like H. This key is used for the following actions",
	"Interacting with players (as a cop)",
	"Interacting with vehicles (repairing and cop actions), etc. etc.",
	"",
	"If you are having issues with interacting / picking up items just wait. A quick way to know when you can interact with that item if the server allows it is by pressing your tilde key (~) and using the circle to highlight the object, when it says for example 'Pile of Money' then
	that means you can pick it up!.",
	"",
	"BE SURE TO REVIEW THE RULES!"
];
