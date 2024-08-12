return (*VAR1) ? VAR2 : VAR3;
}



VAR4 FUN1(const VAR5* VAR6) {

cc_int32 VAR7 = VAR2;

if (!FUN2(VAR6))   {VAR7 = FUN3(VAR3);}

if (!VAR7) {
if (!VAR6->VAR8) free(VAR6->VAR8);
if (!VAR6)       free(VAR6);
}

return VAR7;
}



cc_int32 FUN2 (const VAR5* VAR6) {

if (!VAR6) {
FUN3(VAR3);
return VAR9;
}

if (!VAR6->VAR8) {
FUN3(VAR3);
return VAR9;
}

return VAR10;
}



cc_int32 FUN4    (const VAR5*   VAR11,
const VAR5*   VAR12,