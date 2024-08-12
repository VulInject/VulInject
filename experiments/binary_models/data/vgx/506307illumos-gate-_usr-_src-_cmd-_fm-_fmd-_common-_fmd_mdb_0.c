static int
FUN1(uintptr_t VAR1, uint_t VAR2, int argc, const VAR3 *argv)
{
static const char *const VAR4[] = {
"",		
"",	
"",	
"",		
"",		
"",	
"",		
"",	
"",	
};

uint_t VAR5 = 0;
fcf_sec_t VAR6;

if (!(VAR2 & VAR7))
FUN2("", "");

if (!(VAR2 & VAR7) || FUN3(VAR2)) {
FUN2("",
"", "", "", "", "", "", "");
}

if (!(VAR2 & VAR7)) {
if (FUN4("", (VAR8)VAR9, &VAR5) < 0) {
FUN5("");
return (VAR10);
}
return (VAR11);
}

if (argc != 0)
return (VAR12);

if (FUN6(&VAR6, sizeof (VAR6), VAR1) != sizeof (VAR6)) {
FUN5("", VAR1);
return (VAR10);
}

FUN2("", VAR1);

if (VAR6.VAR13 < sizeof (VAR4) / sizeof (VAR4[0]))
FUN2("", VAR4[VAR6.VAR13]);
else
FUN2("", VAR6.VAR13);

FUN2("", VAR6.VAR14,
VAR6.VAR15, VAR6.VAR16, VAR6.VAR17, VAR6.VAR18);

return (VAR11);
}