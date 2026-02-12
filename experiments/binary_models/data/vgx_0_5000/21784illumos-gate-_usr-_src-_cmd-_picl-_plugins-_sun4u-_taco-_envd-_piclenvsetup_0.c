static int
get_current_temp(ptree_rarg_t *parg, void *buf)
{
tempr_t		temp;
picl_prophdl_t	proph;
sensor_node_t	*snodep;
int		i;


proph = parg->proph;
for (i = 0; i < NSENSORS; ++i) {
snodep = &sensor_nodes[i];
if (snodep->proph != proph)
continue;

if (get_temperature(snodep->sensorp, &temp) < 0)
break;
(void) memcpy(buf, (caddr_t)&temp, sizeof (tempr_t));
return (PICL_SUCCESS);
}
return (PICL_FAILURE);
}