int CharacterSelectDialog( void );
int DefineStatusAreaFlags( int, int, void*, void* );
int EditMBStringChar( unsigned char*, int xposmax, int xpos, int );
int SetCursorFlashToggle( int );
int Test17BC( int );
unsigned char Syscall02A7( void );
unsigned char Syscall1816( int, int );
unsigned short Bdisp_GetPoint_DD( int x, int y );
unsigned short Bdisp_GetPoint_DD_Workbench( int x, int y );
unsigned short Bdisp_GetPoint_VRAM( int x, int y );
void APP_EACT_StatusIcon( int );
void AUX_DisplayErrorMessage( int msgno );
void BatteryIcon( unsigned int );
void Bdisp_AllClr_VRAM( void );
void Bdisp_AreaClr_DD_x3( void*p1 );
void Bdisp_AreaClr( void*p1, unsigned char P2, unsigned short color );
void Bdisp_Fill_VRAM( int color, int mode );
void Bdisp_HeaderFill2( unsigned int, unsigned int, unsigned char, unsigned char );
void Bdisp_HeaderFill( unsigned char, unsigned char );
void Bdisp_HeaderText2( void );
void Bdisp_HeaderText( void );
void Bdisp_PutDisp_DD_stripe( int y1, int y2 );
void Bdisp_PutDisp_DD( void );
void Bdisp_SetPoint_DD( int x, int y, int color );
void Bdisp_SetPoint_VRAM( int x, int y, int color );
void Bdisp_SetPointWB_VRAM( int x, int y, int color );
void Bdisp_ShapeBase3XVRAM( void*shape );
void Bdisp_ShapeBase( unsigned char*work, void*shape, int color, int line_width, int zero1, int zero2 );
void Bdisp_ShapeToVRAM16C( void*, int color );
void Bdisp_WriteGraphVRAM( TDispGraph* );
void Bdisp_WriteGraphVRAM_WB( TDispGraph* );
void Box2( int, int );
void BoxInnerClear( int );
void Box( int, int, int, int, int );
void BoxYLimits( int lines, int*top, int*bottom );
void Cursor_SetFlashOff( void );
void Cursor_SetFlashOn( unsigned char cursor_type );
void d_c_Icon( unsigned int );
void DefineStatusGlyph( int, void* );
void DefineStatusMessage( char*msg, short P2, char P3, char P4 );
void DirectDrawRectangle( int x1, int y1, int x2, int y2, unsigned short color );
void DispInt( int, int );
void DisplayMBString2( int, unsigned char*, int, int xpos, int zero, int x, int y, int, int, int );
void DisplayMBString( unsigned char*, int, int xpos, int x, int y );
void DisplayMessageBox( unsigned char*message );
void DisplayStatusArea( void );
void DrawFrame( int color );
void DrawFrameWorkbench( int, int, int, int, int );
void DrawHeaderLine( void );
void EditMBStringCtrl2( unsigned char*, int xposmax, void*, void*, void*, int, int, int, int );
void EditMBStringCtrl3( unsigned char*, int xposmax, void*, void*, void*, int, int, int, int, int );
void EditMBStringCtrl4( unsigned char*, int xposmax, void*, void*, void*, int, int, int, int, int, int );
void EditMBStringCtrl( unsigned char*, int xposmax, void*, void*, void*, int, int );
void EnableDisplayHeader( int, int );
void EnableStatusArea( int );
void FKey_Display( int, void* );
void GetFKeyPtr( int, void* );
void*GetMiniGlyphPtr( unsigned short mb_glyph_no, unsigned short*glyph_info );
void Keyboard_CursorFlash( void );
void KeyboardIcon( unsigned int );
void LineIcon( unsigned int );
void LoadVRAM_1( void );
void locate_OS( int X, int y );
void MsgBoxPop( void );
void MsgBoxPush( int lines );
void NormIcon( unsigned int );
void PrintCXY( int, int, unsigned char*, int, int, int, int, int, int );
void PrintGlyph( int, int, unsigned char*glyph, int, int color, int back_color, int );
void PrintLine2( int, int, unsigned char*, int, int, int, int, int );
void PrintLine( unsigned char*msg, int imax );
void PrintMiniGlyph(int x, int y, void*glyph, int mode_flags, int glyph_width, int, int, int, int, int color, int back_color, int );
void PrintMini( int*, int*, unsigned char*, int, int, int, int, int, int, int, unsigned int );
void Print_OS( unsigned char*msg, int invers, int zero2 );
void PrintXY_2( int mode, int x, int y, int msgno, int color );
void PrintXY( int x, int y, char*string, int mode, int color );
void ProgressBar0(int, int, int, int, int );
void ProgressBar(int, int );
void RadIcon( unsigned int );
void RealIcon( unsigned int );
void SaveVRAM_1( void );
void Scrollbar( void* );
void SetBackGround( int );
void SetupMode_StatusIcon( void );
void StandardScrollbar( void* );
void Syscall02A4( int, int );
void Syscall02A9( int );
void Test01A8(int,int,int);
void Test1B0E(void);
void WriteBackground( void*target, int width, int height, void*source, int, int, int );
