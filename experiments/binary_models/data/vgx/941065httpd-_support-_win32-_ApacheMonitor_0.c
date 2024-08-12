HINSTANCE         VAR1 = NULL;
VAR2            *VAR3;          
VAR2            *VAR4;    
HICON             VAR5;
HICON             VAR6;
UINT              VAR7;
DWORD             VAR8;
BOOL              VAR9 = VAR10;
BOOL              VAR11 = VAR10;
ST_APACHE_SERVICE VAR12[VAR13];
ST_MONITORED_COMP VAR14[VAR15];

HBITMAP           VAR16, VAR17;
HBITMAP           VAR18, VAR19;
BOOL              VAR20;
HWND              VAR21;
HWND              VAR22;
HWND              VAR23;
HWND              VAR24;
HCURSOR           VAR25;
HCURSOR           VAR26;

LANGID            VAR27;
CRITICAL_SECTION  VAR28;
LPTSTR            VAR29;


static VAR2 *VAR30[VAR31 - VAR32 + 1];


void FUN1()
{
int VAR33;
for (VAR33 = 0; VAR33 < VAR13; VAR33++)
{
if (VAR12[VAR33].VAR34) {
free(VAR12[VAR33].VAR34);
}
if (VAR12[VAR33].VAR35) {
free(VAR12[VAR33].VAR35);
}
if (VAR12[VAR33].VAR36) {
free(VAR12[VAR33].VAR36);
}
if (VAR12[VAR33].VAR37) {
free(VAR12[VAR33].VAR37);
}
if (VAR12[VAR33].VAR38) {
free(VAR12[VAR33].VAR38);
}

}
memset(VAR12, 0, sizeof(VAR39) * VAR13);

}