#Manifest kills a process using pkill command
exec { "pkill killmenow":
  path     => '/usr/bin:/usr/sbin:/bin',
}
