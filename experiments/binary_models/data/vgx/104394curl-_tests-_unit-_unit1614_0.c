static void FUN1(void)
{

}

struct VAR1 {
const char *VAR2;
const char *VAR3;
unsigned int VAR4;
bool VAR5;
};

struct VAR6 {
const char *VAR2;
const char *VAR3;
bool VAR5;
bool VAR7; 
};

VAR8
{
int VAR9;
int VAR10 = 0;
struct check VAR11[]= {
{ "", "", 33, VAR12},
{ "", "", 32, VAR13},
{ "", "", 0, VAR13},
{ "", "", 24, VAR13},
{ "", "", 26, VAR13},
{ "", "", 20, VAR13},
{ "", "", 18, VAR13},
{ "", "", 12, VAR13},
{ "", "", 8, VAR13},
{ "", "", 8, VAR12},
{ "", "", 32, VAR12},
{ "", "", 0, VAR12},
{ NULL, NULL, 0, VAR12} 
};
struct check VAR14[]= {
{ "", "", 0, VAR13},
{ "", "", 128, VAR13},
{ "", "", 128, VAR13},
{ "", "", 129, VAR12},
{ "", "", 64, VAR13},
{ NULL, NULL, 0, VAR12} 
};
struct noproxy VAR15[]= {
{ "", "", VAR13, VAR13},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "",
VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR12, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", ""
""
"" , VAR12, VAR12},
{ "", ""
""
"" , VAR12, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR12, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR12, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR12, VAR12},
{ "", "", VAR12, VAR12},
{ "", "", VAR12, VAR12},
{ "", "", VAR12, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR12, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR12, VAR12},
{ "", "", VAR13, VAR12},
{ "", "", VAR12, VAR12},
{ NULL, NULL, VAR12, VAR12}
};
for(VAR9 = 0; VAR11[VAR9].VAR2; VAR9++) {
bool VAR5 = FUN2(VAR11[VAR9].VAR2, VAR11[VAR9].VAR3, VAR11[VAR9].VAR4);
if(VAR5 != VAR11[VAR9].VAR5) {
fprintf(VAR16, "",
VAR11[VAR9].VAR2, VAR11[VAR9].VAR3, VAR11[VAR9].VAR4,
VAR11[VAR9].VAR5 ? "": "");
VAR10++;
}
}
for(VAR9 = 0; VAR14[VAR9].VAR2; VAR9++) {
bool VAR5 = FUN3(VAR14[VAR9].VAR2, VAR14[VAR9].VAR3, VAR14[VAR9].VAR4);
if(VAR5 != VAR14[VAR9].VAR5) {
fprintf(VAR16, "",
VAR14[VAR9].VAR2, VAR14[VAR9].VAR3, VAR14[VAR9].VAR4,
VAR14[VAR9].VAR5 ? "": "");
VAR10++;
}
}
for(VAR9 = 0; VAR15[VAR9].VAR2; VAR9++) {
bool VAR17 = VAR12;
bool VAR5 = FUN4(VAR15[VAR9].VAR2, VAR15[VAR9].VAR3, &VAR17);
if(VAR5 != VAR15[VAR9].VAR5) {
fprintf(VAR16, "",
VAR15[VAR9].VAR2, VAR15[VAR9].VAR3,
VAR15[VAR9].VAR5 ? "": "");
VAR10++;
}
if(VAR17 != VAR15[VAR9].VAR7) {
fprintf(VAR16, "",
VAR15[VAR9].VAR3, VAR15[VAR9].VAR7?"":"");
VAR10++;
}
}
return VAR10;
}