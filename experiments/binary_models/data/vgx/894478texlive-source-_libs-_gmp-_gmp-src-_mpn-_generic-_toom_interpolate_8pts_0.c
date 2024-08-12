FUN1 (mp_ptr VAR1, mp_srcptr VAR2, mp_size_t VAR3, unsigned int VAR4, mp_ptr VAR5)
{
return FUN2(VAR1,VAR2,VAR3,FUN3(1) <<(VAR4));
mp_limb_t VAR6;
VAR6 = FUN4 (VAR5,VAR2,VAR3,VAR4);
return VAR6 + FUN5 (VAR1,VAR1,VAR5,VAR3);
}



do {									\
mp_limb_t VAR6;							\
FUN6 (VAR1, VAR7, VAR2[0] >> VAR4);					\
VAR6 = FUN1 (VAR1, VAR2 + 1, VAR8 - 1, VAR9 - VAR4, VAR5);	\
FUN6 (VAR1 + VAR8 - 1, VAR7 - VAR8 + 1, VAR6);				\
} while (0)