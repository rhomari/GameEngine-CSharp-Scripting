using System.Runtime.InteropServices;
using System.Collections.Generic;
namespace ScriptDLL
{
    public class ScriptEngine 
    {

        static int i;
       
        static public Dictionary<string, int> GameObjects= new Dictionary<string, int>();
        [DllImport("GameEngine.exe", EntryPoint = "createGameObject")]
        public extern static void createGameObject(int id);

        [DllImport("GameEngine.exe", EntryPoint = "setPosition")]
        public extern static void setPosition(int id,  int x, int y);

        [DllImport("GameEngine.exe", EntryPoint = "getPosition")]
        public extern static POS getPosition(int id);

        public static void CreateGameObject(string objectName)
        {
            i++;
            createGameObject(i);
            GameObjects.Add(objectName, i);

        }
        public struct POS
        {
            public int x;
            public int y;
        }
        
    }
 
  
}
