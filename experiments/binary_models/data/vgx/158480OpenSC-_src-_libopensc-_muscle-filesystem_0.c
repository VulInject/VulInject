int FUN1(VAR1* VAR2) {
mscfs_file_t VAR3;
int VAR4;
FUN2(VAR2);
VAR4 = VAR2->FUN3(&VAR3, 1, VAR2->VAR5);
if(VAR4 == 0)
return 0;
else if(VAR4 < 0)
return VAR4;
while(1) {
if(!FUN4(VAR2, VAR3.VAR6)) {

VAR7* VAR8 = VAR3.VAR6.VAR9;
if(VAR8[2] == 0 && VAR8[3] == 0) {
VAR8[2] = VAR8[0];
VAR8[3] = VAR8[1];
VAR8[0] = 0x3F;
VAR8[1] = 0x00;
VAR3.VAR10 = 0;
} else  {
VAR3.VAR10 = 1; 
}

FUN5(VAR2, &VAR3);
}
VAR4 = VAR2->FUN3(&VAR3, 0, VAR2->VAR5);
if(VAR4 == 0)
break;
else if(VAR4 < 0)
return VAR4;
}
return VAR2->VAR11.VAR12;
}