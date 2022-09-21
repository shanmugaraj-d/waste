import java.io.BufferedReader;
import java.io.InputStreamReader;
public class trace
{
public static void runSystemCommand(String command)
{
try
{
Process p = Runtime.getRuntime().exec(command);
BufferedReader inputStream = new BufferedReader(
new InputStreamReader(p.getInputStream()));
String s = "";
while ((s = inputStream.readLine()) != null)
System.out.println(s);
}
catch (Exception e)
{
}
}
public static void main(String[] args)
{
String ip = "www.youtube.com";
runSystemCommand("tracert " + ip);
}
}