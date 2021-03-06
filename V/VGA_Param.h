parameter VGA_WIDTH  = 640;
parameter VGA_HEIGHT = 480;


//	Horizontal Parameter	( Pixel )
parameter	H_SYNC_CYC	=	96+6;
parameter	H_SYNC_BACK	=	48-6;//4848;
parameter	H_SYNC_ACT	=	640;	
parameter	H_SYNC_FRONT=	16;
parameter	H_SYNC_TOTAL=	800;

//	Virtical Parameter		( Line )
//parameter	V_SYNC_CYC	=	2;
//parameter	V_SYNC_BACK	=	33;

parameter	V_SYNC_CYC	=	2+2;
parameter	V_SYNC_BACK	=	33-2;

parameter	V_SYNC_ACT	=	480;	
parameter	V_SYNC_FRONT=	10;
parameter	V_SYNC_TOTAL=	525;
//	Start Offset
parameter	X_START		=	H_SYNC_CYC+H_SYNC_BACK; // 96+6 + 48-6 = 144
parameter	Y_START		=	V_SYNC_CYC+V_SYNC_BACK; // 2+2 + 33-2 = 35
