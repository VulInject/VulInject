FUN1 (int VAR1)
{
LPWSTR VAR2 = FUN2 (VAR3"", VAR1, VAR4, NULL);
LPWSTR VAR5 = FUN2 (VAR3"", VAR1, VAR4, NULL);
DWORD VAR6 = FUN3 (VAR3"", VAR1, VAR4);
PROCESS_INFORMATION VAR7;
gdb_wince_result VAR8;

VAR8 = FUN4 (VAR2,
VAR5,	
NULL,	
NULL,	
VAR9,	
VAR6,	
NULL,
NULL,	
NULL,
&VAR7);
FUN5 (VAR3"", VAR8, VAR1, VAR4, &VAR7, sizeof (VAR7));
VAR10 = VAR7.VAR11;
}