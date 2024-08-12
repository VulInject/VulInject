static VAR1 FUN1(char **VAR2, int VAR3,
LLVMBuilderRef VAR4,
LLVMValueRef VAR5) {
LLVMValueRef VAR6[VAR7];
int VAR8 = 0;
int VAR9;

for (VAR9 = 0; VAR9 < VAR3; VAR9++) {
char VAR10 = VAR2[VAR9][0];
switch (VAR10) {
case '':
case '':
case '':
case '':
case '':
case '':
case '':
if (VAR8 < 2) {
FUN2("");
return NULL;
}

VAR6[VAR8 - 2] = FUN3(VAR4, FUN4(VAR10),
VAR6[VAR8 - 1], VAR6[VAR8 - 2], "");
VAR8--;

break;

case '': {
LLVMValueRef VAR11;

if (VAR8 < 1) {
FUN2("");
return NULL;
}

VAR11 = FUN5(VAR4, VAR5, &VAR6[VAR8 - 1], 1, "");
VAR6[VAR8 - 1] = FUN6(VAR4, VAR11, "");

break;
}

default: {
char *VAR12;
long VAR13 = FUN7(VAR2[VAR9], &VAR12, 0);
if (VAR12[0] != '') {
FUN2("");
return NULL;
}

if (VAR8 >= VAR7) {
FUN2("");
return NULL;
}

VAR6[VAR8++] = FUN8(FUN9(), VAR13, 1);
break;
}
}
}

if (VAR8 < 1) {
FUN2("");
return NULL;
}

FUN10(VAR4, VAR6[VAR8 - 1]);

return VAR6[VAR8 - 1];
}