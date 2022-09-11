using System;

using System.Diagnostics;

namespace ScriptDLL
{
    public class Script
    {
        static int runScript(string args)
        {

            Stopwatch stopWatch = new  Stopwatch();
            stopWatch.Start();
            Console.WriteLine("CSharp : Script is running...");
            ScriptEngine.CreateGameObject("player 1");
            ScriptEngine.CreateGameObject("player 2");
            ScriptEngine.setPosition(ScriptEngine.GameObjects["player 1"], 20, 60);
            ScriptEngine.setPosition(ScriptEngine.GameObjects["player 2"], 26, 38);
           
            ScriptEngine.POS position = ScriptEngine.getPosition(ScriptEngine.GameObjects["player 2"]);

            Console.WriteLine("CSharp : Position of player 2 is X : {0} Y : {1}",position.x.ToString(), position.y.ToString());
            Console.WriteLine("Script executed in : {0} ms", stopWatch.ElapsedMilliseconds);
            return 0;
           
        }

    }
}
