void FUN1(const unsigned char *VAR1, VAR2 *VAR3)
{
u32 VAR4,VAR5,VAR6,VAR7;           
u32 VAR8,VAR9,VAR10,VAR11;       
u32 VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;    
u32 VAR18, VAR19, VAR20, VAR21, VAR22;
u32 VAR23[34];
u32 VAR24[34];



VAR4  = FUN2(VAR1     );
VAR5  = FUN2(VAR1 +  4);
VAR6  = FUN2(VAR1 +  8);
VAR7  = FUN2(VAR1 + 12);
VAR8 = FUN2(VAR1 + 16);
VAR9 = FUN2(VAR1 + 20);
VAR10 = FUN2(VAR1 + 24);
VAR11 = FUN2(VAR1 + 28);


FUN3(0) = VAR4; FUN4(0) = VAR5;
FUN3(1) = VAR6; FUN4(1) = VAR7;
FUN5(VAR4, VAR5, VAR6, VAR7, VAR16, VAR17, 45);
FUN3(12) = VAR4; FUN4(12) = VAR5;
FUN3(13) = VAR6; FUN4(13) = VAR7;
FUN6(VAR4, VAR5, VAR6, VAR7, VAR16, VAR17, 15);
FUN3(16) = VAR4; FUN4(16) = VAR5;
FUN3(17) = VAR6; FUN4(17) = VAR7;
FUN6(VAR4, VAR5, VAR6, VAR7, VAR16, VAR17, 17);
FUN3(22) = VAR4; FUN4(22) = VAR5;
FUN3(23) = VAR6; FUN4(23) = VAR7;
FUN5(VAR4, VAR5, VAR6, VAR7, VAR16, VAR17, 34);
FUN3(30) = VAR4; FUN4(30) = VAR5;
FUN3(31) = VAR6; FUN4(31) = VAR7;


FUN6(VAR8, VAR9, VAR10, VAR11, VAR16, VAR17, 15);
FUN3(4) = VAR8; FUN4(4) = VAR9;
FUN3(5) = VAR10; FUN4(5) = VAR11;
FUN6(VAR8, VAR9, VAR10, VAR11, VAR16, VAR17, 15);
FUN3(8) = VAR8; FUN4(8) = VAR9;
FUN3(9) = VAR10; FUN4(9) = VAR11;
FUN6(VAR8, VAR9, VAR10, VAR11, VAR16, VAR17, 30);
FUN3(18) = VAR8; FUN4(18) = VAR9;
FUN3(19) = VAR10; FUN4(19) = VAR11;
FUN5(VAR8, VAR9, VAR10, VAR11, VAR16, VAR17, 34);
FUN3(26) = VAR8; FUN4(26) = VAR9;
FUN3(27) = VAR10; FUN4(27) = VAR11;
FUN5(VAR8, VAR9, VAR10, VAR11, VAR16, VAR17, 34);


VAR4 = FUN3(0) ^ VAR8; VAR5 = FUN4(0) ^ VAR9;
VAR6 = FUN3(1) ^ VAR10; VAR7 = FUN4(1) ^ VAR11;
FUN7(VAR4, VAR5,
VAR25, VAR26,
VAR16, VAR17, VAR12, VAR13, VAR14, VAR15);
VAR6 ^= VAR16; VAR7 ^= VAR17;
FUN7(VAR6, VAR7,
VAR27, VAR28,
VAR4, VAR5, VAR12, VAR13, VAR14, VAR15);
VAR4 ^= VAR8; VAR5 ^= VAR9;
FUN7(VAR4, VAR5,
VAR29, VAR30,
VAR6, VAR7, VAR12, VAR13, VAR14, VAR15);
VAR6 ^= VAR16 ^ VAR10; VAR7 ^= VAR17 ^ VAR11;
FUN7(VAR6, VAR7,
VAR31, VAR32,
VAR16, VAR17, VAR12, VAR13, VAR14, VAR15);
VAR4 ^= VAR16; VAR5 ^= VAR17;


VAR8 ^= VAR4; VAR9 ^= VAR5;
VAR10 ^= VAR6; VAR11 ^= VAR7;
FUN7(VAR8, VAR9,
VAR33, VAR34,
VAR16, VAR17, VAR12, VAR13, VAR14, VAR15);
VAR10 ^= VAR16; VAR11 ^= VAR17;
FUN7(VAR10, VAR11,
VAR35, VAR36,
VAR16, VAR17, VAR12, VAR13, VAR14, VAR15);
VAR8 ^= VAR16; VAR9 ^= VAR17;


FUN6(VAR4, VAR5, VAR6, VAR7, VAR16, VAR17, 15);
FUN3(6) = VAR4; FUN4(6) = VAR5;
FUN3(7) = VAR6; FUN4(7) = VAR7;
FUN6(VAR4, VAR5, VAR6, VAR7, VAR16, VAR17, 30);
FUN3(14) = VAR4; FUN4(14) = VAR5;
FUN3(15) = VAR6; FUN4(15) = VAR7;
FUN3(24) = VAR5; FUN4(24) = VAR6;
FUN3(25) = VAR7; FUN4(25) = VAR4;
FUN5(VAR4, VAR5, VAR6, VAR7, VAR16, VAR17, 49);
FUN3(28) = VAR4; FUN4(28) = VAR5;
FUN3(29) = VAR6; FUN4(29) = VAR7;


FUN3(2) = VAR8; FUN4(2) = VAR9;
FUN3(3) = VAR10; FUN4(3) = VAR11;
FUN6(VAR8, VAR9, VAR10, VAR11, VAR16, VAR17, 30);
FUN3(10) = VAR8; FUN4(10) = VAR9;
FUN3(11) = VAR10; FUN4(11) = VAR11;
FUN6(VAR8, VAR9, VAR10, VAR11, VAR16, VAR17, 30);
FUN3(20) = VAR8; FUN4(20) = VAR9;
FUN3(21) = VAR10; FUN4(21) = VAR11;
FUN5(VAR8, VAR9, VAR10, VAR11, VAR16, VAR17, 51);
FUN3(32) = VAR8; FUN4(32) = VAR9;
FUN3(33) = VAR10; FUN4(33) = VAR11;


FUN3(3) ^= FUN3(1); FUN4(3) ^= FUN4(1);
FUN3(5) ^= FUN3(1); FUN4(5) ^= FUN4(1);
FUN3(7) ^= FUN3(1); FUN4(7) ^= FUN4(1);
FUN3(1) ^= FUN4(1) & ~FUN4(9);
VAR20 = FUN3(1) & FUN3(9), FUN4(1) ^= FUN8(VAR20);
FUN3(11) ^= FUN3(1); FUN4(11) ^= FUN4(1);
FUN3(13) ^= FUN3(1); FUN4(13) ^= FUN4(1);
FUN3(15) ^= FUN3(1); FUN4(15) ^= FUN4(1);
FUN3(1) ^= FUN4(1) & ~FUN4(17);
VAR20 = FUN3(1) & FUN3(17), FUN4(1) ^= FUN8(VAR20);
FUN3(19) ^= FUN3(1); FUN4(19) ^= FUN4(1);
FUN3(21) ^= FUN3(1); FUN4(21) ^= FUN4(1);
FUN3(23) ^= FUN3(1); FUN4(23) ^= FUN4(1);
FUN3(1) ^= FUN4(1) & ~FUN4(25);
VAR20 = FUN3(1) & FUN3(25), FUN4(1) ^= FUN8(VAR20);
FUN3(27) ^= FUN3(1); FUN4(27) ^= FUN4(1);
FUN3(29) ^= FUN3(1); FUN4(29) ^= FUN4(1);
FUN3(31) ^= FUN3(1); FUN4(31) ^= FUN4(1);
FUN3(32) ^= FUN3(1); FUN4(32) ^= FUN4(1);


VAR18 = FUN3(33); VAR19 = FUN4(33);
FUN3(30) ^= VAR18; FUN4(30) ^= VAR19;
FUN3(28) ^= VAR18; FUN4(28) ^= VAR19;
FUN3(26) ^= VAR18; FUN4(26) ^= VAR19;
VAR18 ^= VAR19 & ~FUN4(24);
VAR20 = VAR18 & FUN3(24), VAR19 ^= FUN8(VAR20);
FUN3(22) ^= VAR18; FUN4(22) ^= VAR19;
FUN3(20) ^= VAR18; FUN4(20) ^= VAR19;
FUN3(18) ^= VAR18; FUN4(18) ^= VAR19;
VAR18 ^= VAR19 & ~FUN4(16);
VAR20 = VAR18 & FUN3(16), VAR19 ^= FUN8(VAR20);
FUN3(14) ^= VAR18; FUN4(14) ^= VAR19;
FUN3(12) ^= VAR18; FUN4(12) ^= VAR19;
FUN3(10) ^= VAR18; FUN4(10) ^= VAR19;
VAR18 ^= VAR19 & ~FUN4(8);
VAR20 = VAR18 & FUN3(8), VAR19 ^= FUN8(VAR20);
FUN3(6) ^= VAR18; FUN4(6) ^= VAR19;
FUN3(4) ^= VAR18; FUN4(4) ^= VAR19;
FUN3(2) ^= VAR18; FUN4(2) ^= VAR19;
FUN3(0) ^= VAR18; FUN4(0) ^= VAR19;


FUN9(0) = FUN3(0) ^ FUN3(2);
FUN10(0) = FUN4(0) ^ FUN4(2);
FUN9(2) = FUN3(3);
FUN10(2) = FUN4(3);
FUN9(3) = FUN3(2) ^ FUN3(4);
FUN10(3) = FUN4(2) ^ FUN4(4);
FUN9(4) = FUN3(3) ^ FUN3(5);
FUN10(4) = FUN4(3) ^ FUN4(5);
FUN9(5) = FUN3(4) ^ FUN3(6);
FUN10(5) = FUN4(4) ^ FUN4(6);
FUN9(6) = FUN3(5) ^ FUN3(7);
FUN10(6) = FUN4(5) ^ FUN4(7);
VAR21 = FUN3(10) ^ (FUN4(10) & ~FUN4(8));
VAR20 = VAR21 & FUN3(8), VAR22 = FUN4(10) ^ FUN8(VAR20);
FUN9(7) = FUN3(6) ^ VAR21;
FUN10(7) = FUN4(6) ^ VAR22;
FUN9(8) = FUN3(8);
FUN10(8) = FUN4(8);
FUN9(9) = FUN3(9);
FUN10(9) = FUN4(9);
VAR21 = FUN3(7) ^ (FUN4(7) & ~FUN4(9));
VAR20 = VAR21 & FUN3(9), VAR22 = FUN4(7) ^ FUN8(VAR20);
FUN9(10) = VAR21 ^ FUN3(11);
FUN10(10) = VAR22 ^ FUN4(11);
FUN9(11) = FUN3(10) ^ FUN3(12);
FUN10(11) = FUN4(10) ^ FUN4(12);
FUN9(12) = FUN3(11) ^ FUN3(13);
FUN10(12) = FUN4(11) ^ FUN4(13);
FUN9(13) = FUN3(12) ^ FUN3(14);
FUN10(13) = FUN4(12) ^ FUN4(14);
FUN9(14) = FUN3(13) ^ FUN3(15);
FUN10(14) = FUN4(13) ^ FUN4(15);
VAR21 = FUN3(18) ^ (FUN4(18) & ~FUN4(16));
VAR20 = VAR21 & FUN3(16), VAR22 = FUN4(18) ^ FUN8(VAR20);
FUN9(15) = FUN3(14) ^ VAR21;
FUN10(15) = FUN4(14) ^ VAR22;
FUN9(16) = FUN3(16);
FUN10(16) = FUN4(16);
FUN9(17) = FUN3(17);
FUN10(17) = FUN4(17);
VAR21 = FUN3(15) ^ (FUN4(15) & ~FUN4(17));
VAR20 = VAR21 & FUN3(17), VAR22 = FUN4(15) ^ FUN8(VAR20);
FUN9(18) = VAR21 ^ FUN3(19);
FUN10(18) = VAR22 ^ FUN4(19);
FUN9(19) = FUN3(18) ^ FUN3(20);
FUN10(19) = FUN4(18) ^ FUN4(20);
FUN9(20) = FUN3(19) ^ FUN3(21);
FUN10(20) = FUN4(19) ^ FUN4(21);
FUN9(21) = FUN3(20) ^ FUN3(22);
FUN10(21) = FUN4(20) ^ FUN4(22);
FUN9(22) = FUN3(21) ^ FUN3(23);
FUN10(22) = FUN4(21) ^ FUN4(23);
VAR21 = FUN3(26) ^ (FUN4(26) & ~FUN4(24));
VAR20 = VAR21 & FUN3(24), VAR22 = FUN4(26) ^ FUN8(VAR20);
FUN9(23) = FUN3(22) ^ VAR21;
FUN10(23) = FUN4(22) ^ VAR22;
FUN9(24) = FUN3(24);
FUN10(24) = FUN4(24);
FUN9(25) = FUN3(25);
FUN10(25) = FUN4(25);
VAR21 = FUN3(23) ^ (FUN4(23) &  ~FUN4(25));
VAR20 = VAR21 & FUN3(25), VAR22 = FUN4(23) ^ FUN8(VAR20);
FUN9(26) = VAR21 ^ FUN3(27);
FUN10(26) = VAR22 ^ FUN4(27);
FUN9(27) = FUN3(26) ^ FUN3(28);
FUN10(27) = FUN4(26) ^ FUN4(28);
FUN9(28) = FUN3(27) ^ FUN3(29);
FUN10(28) = FUN4(27) ^ FUN4(29);
FUN9(29) = FUN3(28) ^ FUN3(30);
FUN10(29) = FUN4(28) ^ FUN4(30);
FUN9(30) = FUN3(29) ^ FUN3(31);
FUN10(30) = FUN4(29) ^ FUN4(31);
FUN9(31) = FUN3(30);
FUN10(31) = FUN4(30);
FUN9(32) = FUN3(32) ^ FUN3(31);
FUN10(32) = FUN4(32) ^ FUN4(31);

return;
}