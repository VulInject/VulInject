VAR1 FUN1(large_t VAR2) { return VAR2; }
VAR1 FUN2(large_t VAR2) { _Bool VAR3 = VAR2; return VAR3; }
VAR1 FUN3(large_t VAR2) { return (VAR1)VAR2; }
VAR1 FUN4(large_t VAR2) { return ~VAR2; }
VAR1 FUN5(large_t VAR2) { _Bool VAR3 = ~VAR2; return VAR3; }
VAR1 FUN6(large_t VAR2) { return (VAR1)~VAR2; }
VAR1 FUN7(large_t VAR2) { return !VAR2; }
VAR1 FUN8(large_t VAR2) { _Bool VAR3 = !VAR2; return VAR3; }
VAR1 FUN9(large_t VAR2) { return (VAR1)!VAR2; }
VAR1 FUN10(large_t VAR2) { return VAR2 & VAR4; }
VAR1 FUN11(large_t VAR2) { _Bool VAR3 = VAR2 & VAR4; return VAR3; }
VAR1 FUN12(large_t VAR2) { return (VAR1)(VAR2 & VAR4); }


typedef unsigned short FUN13((VAR5)) VAR6;

VAR1 FUN14(small_t VAR2) { return VAR2; }
VAR1 FUN15(small_t VAR2) { _Bool VAR3 = VAR2; return VAR3; }
VAR1 FUN16(small_t VAR2) { return (VAR1)VAR2; }