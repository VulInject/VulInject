static void
FUN1(u_int32_t VAR1, void *VAR2, void *VAR3)
{
if (!VAR4) { 
assert(FUN2(VAR5, VAR6) == 0);
FUN1(VAR7, 0, 0); 
}

if (++(FUN3(VAR4)) >= VAR8) 
FUN3(VAR4) = 0; 

if (FUN4(VAR4) == FUN3(VAR4)) { 
if (++(FUN4(VAR4)) >= VAR8) 
FUN4(VAR4) = 0;
} else if (FUN4(VAR4) == (VAR9)-1) 
FUN4(VAR4) = 0;

FUN5(VAR4, FUN3(VAR4)) = VAR1; 
FUN6(VAR4, FUN3(VAR4)) = VAR2;
FUN7(VAR4, FUN3(VAR4)) = VAR3;
}