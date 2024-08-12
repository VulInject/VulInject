static av_cold void FUN1(void)
{
    int VAR1;
    int VAR2 = 0;
    int VAR3 = 0;
    static const uint16_t VAR4[8 * 4 + 8 * 2 + 2 + 4] = {576, 548, 582, 618, 546, 616, 560, 642, 584, 582, 704, 664, 512, 544, 656, 640, 512, 648, 582, 566, 532, 614, 596, 648, 586, 552, 584, 590, 544, 578, 584, 624, 528, 528, 526, 528, 536, 528, 526, 544, 544, 512, 512, 528, 528, 544, 512, 544, 128, 128, 128, 128, 128, 128};
    static VLC_TYPE VAR5[28150][2];
    VAR6.VAR5 = &VAR5[VAR2];
    VAR6.VAR7 = VAR4[VAR3];
    VAR2 += VAR4[VAR3++];
    FUN2(&VAR6, VAR8, 77,
             &VAR9[1], 4, 2,
             &VAR9[0], 4, 2, VAR10);
}
while (0)
    for (VAR1 = 0; VAR1 < 8; VAR1++)
    {
        FUN3(VAR11[0][0][VAR1], VAR12[VAR1][0]);
        FUN3(VAR11[0][1][VAR1], VAR13[VAR1][0]);
        FUN3(VAR11[1][0][VAR1], VAR14[VAR1][0]);
        FUN3(VAR11[1][1][VAR1], VAR15[VAR1][0]);
    }
VAR6.VAR5 = &VAR5[VAR2];
VAR6.VAR7 = VAR4[VAR3];
VAR2 += VAR4[VAR3++];
FUN2(&VAR6, VAR16, 34,
         &VAR9[1], 4, 2,
         &VAR9[0], 4, 2, VAR10);
}
while (0)
    for (VAR1 = 0; VAR1 < 8; VAR1++)
    {
        FUN4(VAR17[0][VAR1], VAR18[VAR1][0]);
        FUN4(VAR17[1][VAR1], VAR19[VAR1][0]);
    }
VAR6.VAR5 = &VAR5[VAR2];
VAR6.VAR7 = VAR4[VAR3];
VAR2 += VAR4[VAR3++];
FUN2(&VAR6, VAR20, 12,
         &VAR9[1], 4, 2,
         &VAR9[0], 4, 2, VAR10);
}
while (0)
    for (VAR1 = 0; VAR1 < 2; VAR1++)
    {
        FUN5(VAR21[0][VAR1], VAR22[VAR1][0]);
    }
for (VAR1 = 0; VAR1 < 4; VAR1++)
{
    FUN5(VAR21[1][VAR1], VAR23[VAR1][0]);
}
if (VAR2 != sizeof(VAR5) / sizeof(VAR24) / 2)
    FUN6(NULL, VAR25, "", (int)(sizeof(VAR5) / sizeof(VAR24) / 2), VAR2);
}