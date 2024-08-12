VAR1 FUN1(pkt_t VAR2, const char *VAR3, const char *VAR4) {
pkt_t VAR5;

if(VAR2 == NULL) return NULL;

VAR5 = (VAR1) calloc(1, sizeof(struct VAR6));

VAR5->VAR7 = VAR2->VAR7;
VAR5->VAR8 = VAR2->VAR8;
VAR5->VAR9 = FUN2(VAR2->VAR9);


if(VAR3 != NULL) {
VAR5->VAR3 = FUN3(VAR3, -1);
FUN4(VAR5->VAR9, 1, -1, "", FUN5(VAR5->VAR3), 0);
} else if(VAR2->VAR3 != NULL)
VAR5->VAR3 = FUN6(VAR2->VAR3);

if(VAR4 != NULL) {
VAR5->VAR4 = FUN3(VAR4, -1);
FUN4(VAR5->VAR9, 1, -1, "", FUN5(VAR5->VAR4), 0);
} else if(VAR2->VAR4 != NULL)
VAR5->VAR4 = FUN6(VAR2->VAR4);

FUN7(VAR10, "");

return VAR5;
}