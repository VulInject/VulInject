gimp_dashboard_sample_memory_available (GimpDashboard *dashboard,
Variable       variable)
{
GimpDashboardPrivate        *priv          = dashboard->priv;
VariableData                *variable_data = &priv->variables[variable];
vm_statistics_data_t        info;
mach_msg_type_number_t      infoCount      = HOST_VM_INFO_COUNT;

variable_data->available = FALSE;


if( host_statistics(mach_host_self (), HOST_VM_INFO,
(host_info_t)&info, &infoCount ) != KERN_SUCCESS )
return;      

variable_data->available  = TRUE;
variable_data->value.size = info.free_count * PAGE_SIZE;
}