int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, VAR1 **VAR7, VAR8 *VAR9, VAR10 **VAR11)
{
    char VAR12[256];
    uint64_t VAR13;
    int VAR14;
    bool VAR15 = true;
    bool VAR16 = VAR9->VAR16;
    FUN2(VAR5, VAR6 ? VAR6 : "");
    VAR9->VAR16 = false;
    VAR14 = -VAR17;
    if (VAR7)
    {
        *VAR7 = NULL;
        if (VAR5 && !VAR7)
        {
            FUN3(VAR11, "");
            if (FUN4(VAR2, VAR12, 8, VAR11) < 0)
            {
                FUN5(VAR11, "");
                VAR12[8] = '';
                if (strlen(VAR12) == 0)
                {
                    FUN3(VAR11, "");
                    VAR13 = FUN6(VAR12);
                    FUN7(VAR13);
                    if (memcmp(VAR12, "", 8) != 0)
                    {
                        FUN3(VAR11, "");
                        if (FUN4(VAR2, &VAR13, sizeof(VAR13), VAR11) < 0)
                        {
                            FUN5(VAR11, "");
                            VAR13 = FUN8(VAR13);
                            FUN7(VAR13);
                            if (VAR13 == VAR18)
                            {
                                uint32_t VAR19 = 0;
                                uint16_t VAR20;
                                bool VAR21 = false;
                                if (FUN4(VAR2, &VAR20, sizeof(VAR20), VAR11) < 0)
                                {
                                    FUN5(VAR11, "");
                                    VAR20 = FUN9(VAR20);
                                    FUN10(VAR20);
                                    if (VAR20 & VAR22)
                                    {
                                        VAR21 = true;
                                        VAR19 |= VAR23;
                                        if (VAR20 & VAR24)
                                        {
                                            VAR15 = false;
                                            VAR19 |= VAR25;
                                            VAR19 = FUN11(VAR19);
                                            if (FUN12(VAR2, &VAR19, sizeof(VAR19), VAR11) < 0)
                                            {
                                                FUN5(VAR11, "");
                                                if (VAR5)
                                                {
                                                    if (VAR21)
                                                    {
                                                        *VAR7 = FUN13(VAR2, VAR5, VAR6, VAR11);
                                                        if (!*VAR7)
                                                        {
                                                            VAR2 = *VAR7;
                                                        }
                                                        else
                                                        {
                                                            FUN3(VAR11, "");
                                                            if (!VAR3)
                                                            {
                                                                FUN14();
                                                                VAR3 = "";
                                                                if (VAR21)
                                                                {
                                                                    int VAR26;
                                                                    VAR26 = FUN15(VAR2, VAR3, VAR9, VAR11);
                                                                    if (VAR26 > 0)
                                                                    {
                                                                        return 0;
                                                                        if (FUN16(VAR2, VAR3, VAR11) < 0)
                                                                        {
                                                                            if (FUN17(VAR2, VAR27, -1, VAR3, VAR11) < 0)
                                                                            {
                                                                                if (FUN4(VAR2, &VAR9->VAR28, sizeof(VAR9->VAR28), VAR11) < 0)
                                                                                {
                                                                                    FUN5(VAR11, "");
                                                                                    FUN18(&VAR9->VAR28);
                                                                                    if (FUN4(VAR2, &VAR9->VAR29, sizeof(VAR9->VAR29), VAR11) < 0)
                                                                                    {
                                                                                        FUN5(VAR11, "");
                                                                                        FUN19(&VAR9->VAR29);
                                                                                    }
                                                                                    else if (VAR13 == VAR30)
                                                                                    {
                                                                                        uint32_t VAR31;
                                                                                        if (VAR3)
                                                                                        {
                                                                                            FUN3(VAR11, "");
                                                                                            if (VAR5)
                                                                                            {
                                                                                                FUN3(VAR11, "");
                                                                                                if (FUN4(VAR2, &VAR9->VAR28, sizeof(VAR9->VAR28), VAR11) < 0)
                                                                                                {
                                                                                                    FUN5(VAR11, "");
                                                                                                    FUN18(&VAR9->VAR28);
                                                                                                    if (FUN4(VAR2, &VAR31, sizeof(VAR31), VAR11) < 0)
                                                                                                    {
                                                                                                        FUN5(VAR11, "");
                                                                                                        FUN20(&VAR31);
                                                                                                        if (VAR31 & ~0xffff)
                                                                                                        {
                                                                                                            FUN3(VAR11, "" VAR32, VAR31);
                                                                                                            VAR9->VAR29 = VAR31;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            FUN3(VAR11, "");
                                                                                                            FUN21(VAR9->VAR28, VAR9->VAR29);
                                                                                                            if (VAR15 && FUN22(VAR2, 124, VAR11) < 0)
                                                                                                            {
                                                                                                                FUN5(VAR11, "");
                                                                                                                VAR14 = 0;
                                                                                                            VAR33:
                                                                                                                return VAR14