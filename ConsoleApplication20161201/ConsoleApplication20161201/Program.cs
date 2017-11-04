using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication20161201
{
    class Program
    {
        /// <summary>
        /// 时间戳转为c#事件
        /// </summary>
        /// <param name="args"></param>
        static void Main(string[] args)
        {
            Tools tool = new Tools();
            Console.WriteLine(tool.convertCh("银行 行不行"));
            Console.ReadKey();
        }
    }
}
