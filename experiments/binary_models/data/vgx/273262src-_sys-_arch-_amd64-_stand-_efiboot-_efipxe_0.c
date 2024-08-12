void
FUN1(void)
{
VAR1 *VAR2;
VAR3 *VAR4;
VAR5 *VAR6;
EFI_STATUS VAR7;
UINTN VAR8;
int VAR9, VAR10;

if (VAR11 == NULL)
return;

VAR7 = VAR12->FUN2(VAR13, &VAR14, NULL, &VAR8,
&VAR6);
if (VAR7 != VAR15)
return;

for (VAR9 = 0; VAR9 < VAR8; VAR9++) {
VAR16 *VAR17;

VAR7 = VAR12->FUN3(VAR6[VAR9], &VAR18,
(void **)&VAR4);
if (VAR7 != VAR15)
continue;

VAR10 = FUN4(VAR11, VAR19);
if (VAR10 == -1 || FUN5(VAR11, VAR4, VAR10))
continue;

VAR7 = VAR12->FUN3(VAR6[VAR9], &VAR14,
(void **)&VAR2);
if (VAR7 != VAR15)
continue;

if (VAR2->VAR20 == NULL)
continue;

VAR17 = (VAR16 *)&VAR2->VAR20->VAR21;
memcpy(&VAR22, VAR17->VAR23, sizeof(VAR22));
memcpy(&VAR24, VAR17->VAR25, sizeof(VAR24));
memcpy(VAR26, VAR17->VAR27, sizeof(VAR26));
VAR28 = VAR26;
VAR29 = VAR2;


VAR30 = FUN6(sizeof(struct VAR31));
memset(VAR30, 0, sizeof(struct VAR31));
memset(VAR30->VAR32.VAR33, 0xff,
sizeof(VAR30->VAR32.VAR33));
break;
}
}