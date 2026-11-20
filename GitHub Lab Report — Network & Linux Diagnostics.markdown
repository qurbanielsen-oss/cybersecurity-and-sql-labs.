# Network & Linux Security Lab Notes

Practical commands and workflow for network diagnostics, Linux system administration, and basic reconnaissance practiced in a virtualized lab environment (Ubuntu / Kali Linux).

---

## 1. Network Diagnostics & Troubleshooting

Before running any security checks, verifying basic connectivity and routing is essential:

* **Check IP configuration and network interfaces:**
  ```bash
  ip a
  ip route
  ```
* **Verify host availability and latency:**
  ```bash
  ping -c 4 <target_ip>
  ```
* **Trace packet route to identify network bottlenecks or drops:**
  ```bash
  traceroute <target_ip>
  ```
* **DNS resolution check:**
  ```bash
  nslookup example.com
  dig example.com +short
  ```
* **Inspect active network connections and listening ports locally:**
  ```bash
  ss -tulnp
  ```

---

## 2. Network Reconnaissance with Nmap (Lab Environment)

Used in isolated lab setups to identify active hosts, open ports, and running service versions:

* **Host discovery (Ping Scan):**
  ```bash
  nmap -sn 192.168.1.0/24
  ```
* **Service version and default script enumeration:**
  ```bash
  nmap -sC -sV -p- <target_ip>
  ```
  * `-sC`: Runs default safe NSE scripts.
  * `-sV`: Probes open ports to determine service/version info.
  * `-p-`: Scans all 65,535 TCP ports.

* **Checking SMB shares on a target host:**
  ```bash
  smbclient -L //<target_ip>/ -N
  ```

---

## 3. Linux System Administration & Log Analysis

Core commands for checking system health, permissions, and security logs:

* **Check running processes and resource usage:**
  ```bash
  ps aux | grep <service_name>
  top
  ```
* **Inspect authentication and system logs (Ubuntu/Debian):**
  ```bash
  sudo tail -n 50 /var/log/auth.log
  sudo journalctl -u ssh --no-pager
  ```
* **Manage file permissions and ownership:**
  ```bash
  chmod 600 private_key.pem
  chown user:user script.sh
  ```
* **Basic Firewall management (UFW):**
  ```bash
  sudo ufw status verbose
  sudo ufw allow 22/tcp
  sudo ufw enable
  ```

---

## Key Takeaways
* Structured troubleshooting (checking interfaces -> routing -> DNS -> ports) saves time when diagnosing both network failures and misconfigured services.
* Understanding what services are exposed on a host (`ss -tulnp` locally vs. `nmap` externally) is the first step in securing any Linux server.