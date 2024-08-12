int FUN1(int argc, char* argv[])
{
ULONG VAR1;
WINPR_PSLIST_ENTRY VAR2;
WINPR_PSLIST_HEADER VAR3;
FUN2(argc);
FUN2(argv);

VAR3 = (VAR4)FUN3(sizeof(VAR5),
VAR6);

if (!VAR3)
{
FUN4("");
return -1;
}

FUN5(VAR3);


for (VAR1 = 1; VAR1 <= 10; VAR1 += 1)
{
PPROGRAM_ITEM VAR7 =
(VAR8)FUN3(sizeof(VAR9), VAR6);

if (!VAR7)
{
FUN4("");
return -1;
}

VAR7->VAR10 = VAR1;
VAR2 = FUN6(VAR3, &(VAR7->VAR11));
}


for (VAR1 = 10; VAR1 >= 1; VAR1 -= 1)
{
PPROGRAM_ITEM VAR7;
WINPR_PSLIST_ENTRY VAR12 = FUN7(VAR3);

if (!VAR12)
{
FUN4("");
return -1;
}

VAR7 = (VAR8)VAR12;
FUN4("" VAR13 "", VAR7->VAR10);



FUN8(VAR12);
}


VAR2 = FUN7(VAR3);

if (VAR2)
{
FUN4("");
return -1;
}

FUN8(VAR3);

return 0;
}