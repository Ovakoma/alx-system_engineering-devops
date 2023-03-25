#Manifest kills a process using pkill command
exec { "pkill":
  command  => 'pkill -f killmenow',
  path     => 'usr/bin/:/usr/local/bin/:/bin/',
}
