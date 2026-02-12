STP_IN_stpm_get_state (IN int vlan_id, OUT UID_STP_STATE_T* entry)
{
register STPM_T* this;

RSTP_CRITICAL_PATH_START;
this = stpapi_stpm_find (vlan_id);

if (!this) { 
RSTP_CRITICAL_PATH_END;
return STP_Vlan_Had_Not_Yet_Been_Created;
}

(void) strncpy (entry->vlan_name, this->name, NAME_LEN);
entry->vlan_id = this->vlan_id;
_conv_br_id_2_uid (&this->rootPrio.root_bridge, &entry->designated_root);
entry->root_path_cost = this->rootPrio.root_path_cost;
entry->root_port = this->rootPortId;
entry->max_age =       this->rootTimes.MaxAge;
entry->forward_delay = this->rootTimes.ForwardDelay;
entry->hello_time =    this->rootTimes.HelloTime;

_conv_br_id_2_uid (&this->BrId, &entry->bridge_id);

entry->stp_enabled = this->admin_state;

entry->timeSince_Topo_Change = this->timeSince_Topo_Change;
entry->Topo_Change_Count = this->Topo_Change_Count;
entry->Topo_Change = this->Topo_Change;

RSTP_CRITICAL_PATH_END;
return 0;
}