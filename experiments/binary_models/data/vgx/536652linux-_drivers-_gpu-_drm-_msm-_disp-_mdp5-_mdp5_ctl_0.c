static VAR1 FUN1(enum mdp5_pipe VAR2,
enum mdp_mixer_stage_id VAR3)
{
if (VAR3 < VAR4 && (VAR2 != VAR5 && VAR2 != VAR6))
return 0;

switch (VAR2) {
case VAR7: return VAR8;
case VAR9: return VAR10;
case VAR11: return VAR12;
case VAR13: return VAR14;
case VAR15: return VAR16;
case VAR17: return VAR18;
case VAR19: return VAR20;
case VAR21: return VAR22;
case VAR23: return VAR24;
case VAR25: return VAR26;
case VAR5: return FUN2(VAR3);
case VAR6: return FUN3(VAR3);
default:	return 0;
}
}