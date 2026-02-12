static void cpu_cluster_realize(DeviceState *dev, Error **errp)
{

CPUClusterState *cluster = CPU_CLUSTER(dev);
Object *cluster_obj = OBJECT(dev);
CallbackData cbdata = {
.cluster = cluster,
.cpu_count = 0,
};

if (cluster->cluster_id >= MAX_CLUSTERS) {
error_setg(errp, "cluster-id must be less than %d", MAX_CLUSTERS);
return;
}

object_child_foreach_recursive(cluster_obj, add_cpu_to_cluster, &cbdata);


assert(cbdata.cpu_count > 0);
}