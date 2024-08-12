struct VAR1 *FUN1(const struct VAR2 *VAR3)
{
struct VAR1 *VAR4;
__u32 VAR5, VAR6;
__u64 VAR7;

VAR5 = VAR3->VAR8;

if (!VAR5)
return VAR9 = VAR10, NULL;


if (VAR3->VAR11 <
FUN2(struct VAR12, VAR13))
return VAR9 = VAR10, NULL;

VAR4 = calloc(1, sizeof(*VAR4));
if (!VAR4)
return VAR9 = VAR14, NULL;


VAR4->VAR5 = VAR5;
VAR4->VAR15 = VAR3->VAR11;
VAR7 = (VAR16)VAR5 * VAR4->VAR15;
VAR4->VAR17 = malloc(VAR7);
if (!VAR4->VAR17)
goto VAR18;
memcpy(VAR4->VAR17, (void *)(long)VAR3->VAR19, VAR7);

VAR6 = VAR3->VAR20;
if (!VAR6 ||
!VAR3->VAR21 ||
VAR3->VAR22 != VAR5 ||
VAR3->VAR23 < sizeof(VAR16) ||
VAR3->VAR24 != VAR6 ||
!VAR3->VAR25 ||
!VAR3->VAR26)

return VAR4;


VAR4->VAR6 = VAR6;
VAR4->VAR27 = VAR3->VAR23;
VAR7 = (VAR16)VAR5 * VAR4->VAR27;
VAR4->VAR28 = malloc(VAR7);
if (!VAR4->VAR28)
goto VAR18;
memcpy(VAR4->VAR28,
(void *)(long)VAR3->VAR21, VAR7);


VAR4->VAR29 = malloc(VAR6 *
sizeof(VAR30));
if (!VAR4->VAR29)
goto VAR18;


VAR4->VAR31 = malloc(VAR6 *
sizeof(VAR30));
if (!VAR4->VAR31)
goto VAR18;

if (FUN3(VAR4,
(VAR16 *)(long)VAR3->VAR25,
(VAR30 *)(long)VAR3->VAR26))
goto VAR18;

return VAR4;

VAR18:
FUN4(VAR4);
return VAR9 = VAR10, NULL;
}