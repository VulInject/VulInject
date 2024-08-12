void FUN1(int VAR1, int *VAR2, int (*VAR3)(unsigned char), int (*VAR4)(int), int (*VAR5)(long), int (*VAR6)(void), int (*VAR7)(int *), int (*VAR8)(int (*)[3]), int (*VAR9)(void *), int (*VAR10)(int (*)(int)))
{
FUN2();

FUN3(VAR1);
FUN4(VAR1);
FUN5(VAR1);
FUN3(123);
FUN4(123);
FUN5(123);
FUN3(123L);
FUN4(123L);
FUN5(123L);
FUN3(VAR11);
FUN4(VAR11);
FUN5(VAR11);

FUN6(VAR2);
FUN6((void*)0);
FUN6(VAR12);
FUN6(&VAR11);
FUN6(VAR13);
FUN7(VAR14);

FUN8(VAR2);
FUN8((void*)0);
FUN8(VAR12);
FUN8(&VAR11);
FUN8(VAR13);
FUN8(VAR14);

FUN8(VAR15);
FUN8(&VAR15);
FUN9(VAR15);
FUN9(&VAR15);
}