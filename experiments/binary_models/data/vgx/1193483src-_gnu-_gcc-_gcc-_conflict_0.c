FUN1 (conflict_graph VAR1, int VAR2, int VAR3)
{

struct conflict_graph_arc_def VAR4;
VAR4.VAR5 = FUN2 (VAR2, VAR3);
VAR4.VAR6 = FUN3 (VAR2, VAR3);

return FUN4 (VAR1->VAR7, (void *) &VAR4) != NULL;
}