int FUN1(struct VAR1 *VAR2)
{
int VAR3;
struct VAR4 *VAR5 = &VAR2->VAR6.VAR5;
struct VAR6 *VAR6 = &VAR2->VAR6;
char VAR7[VAR8];
struct uwb_mac_addr VAR9;

VAR3 = FUN2(VAR2, &VAR9);
if (VAR3 < 0) {
FUN3(VAR5, "", VAR3);
return VAR3;
}

if (FUN4(&VAR9) || FUN5(&VAR9)) {
VAR9.VAR10[0] = 0x02; 
FUN6(&VAR9.VAR10[1], sizeof(VAR9.VAR10)-1);

VAR3 = FUN7(VAR2, &VAR9);
if (VAR3 < 0) {
FUN8(VAR7, sizeof(VAR7), &VAR9);
FUN3(VAR5, "",
VAR7, VAR3);
return VAR3;
}
}
VAR6->VAR11 = VAR9;
return 0;
}