static void
FUN1(char *VAR1, VAR2 *VAR3,
DWORD VAR4, VAR5 *VAR6)
{
int VAR7 = 0, VAR8 = 0, VAR9;
int VAR10, VAR11;
smb_wchar_t VAR12[VAR13];
smb_wchar_t VAR14[VAR15 * 2];

(void) FUN2(VAR14, VAR1,
strlen(VAR1) + 1);
VAR7 = FUN3(VAR1);


(void) FUN2(VAR12, VAR3->VAR16,
strlen(VAR3->VAR16) + 1);
VAR8 = FUN3(VAR3->VAR16);

VAR11 = VAR7 + VAR8;
VAR10 = VAR17 * sizeof (VAR18) +
VAR19 * sizeof (VAR20) + VAR11;

VAR6->VAR21 = sizeof (VAR5);
VAR6->VAR22 = VAR23;
VAR6->VAR24 = VAR4;
VAR6->VAR25 = VAR3->VAR26.VAR27;
VAR6->VAR28 = VAR3->VAR26.VAR27;
FUN4(VAR3->VAR29, &VAR6->VAR30, &VAR6->VAR31);
VAR6->VAR32 = 1;
VAR6->VAR33 = 0;
VAR6->VAR34 = 0;
VAR6->VAR35 = 0;
VAR6->VAR36 = VAR10;
VAR6->VAR37 = 0;
VAR6->VAR38 = 0;
VAR6->VAR39 = 0;
VAR6->VAR40 = 0;

FUN5(VAR6->VAR41, VAR42);
(void) memcpy(VAR6->VAR41, VAR14, VAR7);
(void) memcpy(VAR6->VAR41 + VAR7, VAR12, VAR8);

VAR9 = strlen(VAR3->VAR43) + 1;
if (VAR9 > 0)

(void) FUN2((VAR44 *)(VAR6->VAR41 + VAR11),
VAR3->VAR43, VAR9);

VAR6->VAR45 = sizeof (VAR5);
}