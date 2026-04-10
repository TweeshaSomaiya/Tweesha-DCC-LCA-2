# NFS Configuration in Linux

## Aim

To configure a Network File System (NFS) server and access the shared directory from a client system.

## Objective

* To understand file sharing in distributed systems
* To configure NFS server and client
* To verify file sharing across systems

## Description

NFS (Network File System) allows a system to share directories and files with others over a network. The shared directory on the server can be accessed by clients as if it were part of their local file system.

## Steps Performed

1. Installed NFS packages on the system
2. Created a shared directory `/nfs_share`
3. Assigned permissions to allow access
4. Configured `/etc/exports` to export the directory
5. Restarted NFS service
6. Created a mount point on client
7. Mounted the shared directory using localhost
8. Verified file sharing between server and client

## Result

The client successfully accessed the server’s shared directory and created files, which were visible on both sides.

## Conclusion

NFS enables efficient file sharing between systems over a network. It simplifies data access and management in distributed environments.

## Analysis

### 1. Role of /etc/exports

It defines which directories are shared and the permissions given to clients.

### 2. Why mounting is required

Mounting connects the remote directory to the local system so it can be accessed like a normal folder.

### 3. Difference between local file system and NFS

* Local FS: Stored on same machine
* NFS: Stored on remote machine but accessed locally

### 4. Effect of incorrect permissions

If permissions are incorrect, clients may not be able to read or write files.

## Advanced Task

To allow only a specific IP and read-only access:
/nfs_share 192.168.1.5(ro,sync)

## FAQ

### 1. What is the role of /etc/exports?

It controls which directories are shared and access permissions.

### 2. Why is mounting required?

To access remote files locally.

### 3. Difference between local FS and NFS?

Local is physical storage, NFS is network-based storage.

### 4. What happens if permissions are not set properly?

Clients cannot access or modify files.
