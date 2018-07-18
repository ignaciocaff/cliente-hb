/****************************************************************
*		 This client was writen by Diuuude & Snoopy81.			*
*					Based on Cleroth work.						*
*																*
*			V3.51 compatibility by Cleroth						*
*			V3.51 dialogs by Diuuude							*
*			Effects, mobs, Apocalypse, Heldenian				*
*			& finalizing by Snoopy81							*
*			V3.82 Crafting & Angels by Snoopy81					*
*****************************************************************/

/****************************************************************
*	Find here all compilation options							*
*	I removed useless ones and tryed to add some explanations	*
*	( Snoopy81 06/2005 )										*
*****************************************************************/

/*** Put here global data for your server ***/
#define NAME_WORLDNAME			"WS1"											// Name for default (1st) server
#define MSG_WORLDNAME1			"Helbreath Server"								// Long name for 1st server...

#define MSG_HOMEPAGE			"http://www.helbreath.com.ar"					// Web Server
#define MSG_FORUMPAGE           "http://www.helbreath.com.ar/foro/forum.php"	// Forum Server

#define DEF_UPPERVERSION		3
#define DEF_LOWERVERSION		82

#define DEF_SERVER_IP           "192.168.1.156"									// Server IP
#define DEF_SERVER_PORT			2848											// WorldLServer Port

#define DEF_STATS_LIMIT         200												// Server Max Stats
#define DEF_MAX_LEVEL			180												// Server Max Level

#define DEF_MAKE_ACCOUNT														// Enable Account Creator

//#define res																	// Change Resolution from 640x480 to 800x600	-> SIN TERMINAR

#define DEF_USE_LOGIN															// Enable login.cfg in CONTENTS

//#define DEF_USE_DNS															// Enable DNS system
#define DEF_SERVER_DNS			"helbreath.no-ip.org"							// Web DNS Server

//#define _DEBUG																// Multi-Client

//#define DEF_WINDOWED_MODE														// Windowed Mode
//#define DEF_USING_WIN_IME

/*#ifndef _DEBUG
	#undef DEF_WINDOWED_MODE
#endif*/

#define DEF_ANTI_HACK			// Snoopy: Mes antiHacks personels!
								// changes CCM routine to send "real checked time" instead of "sending time". 
								// CCM is reduced to 6150

#ifdef DEF_ANTI_HACK
	#define DEF_HIDDEN_LOWERVERSION		67
	//that can be whatever number you wish, 1 byte-sized numbers will work fine
	#define DEF_VERSIONPLUSMODIFIER     1+(DEF_HIDDEN_LOWERVERSION % 9) 
#else
	#define DEF_VERSIONPLUSMODIFIER     0 
#endif