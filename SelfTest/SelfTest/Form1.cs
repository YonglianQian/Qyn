using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using NPOI.HSSF.UserModel;
using NPOI.SS.UserModel;
using NPOI.XSSF.UserModel;
using System.IO;
using System.Reflection;

namespace SelfTest
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void toolStripButton1_Click(object sender, EventArgs e)
        {
            HSSFWorkbook wb = new HSSFWorkbook();
            FileStream fo = new FileStream(@"E:\Output\2.xls",FileMode.OpenOrCreate);
            wb.Write(fo);
            fo.Close();
            IWorkbook wb1 = new XSSFWorkbook();
            FileStream fs = new FileStream(@"E:\Output\3.xlsx", FileMode.OpenOrCreate);
            wb.Write(fs);
            fs.Close();
        }

        private void 演示一ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show(typeof(System.Delegate).ToString(), "Delegate类型", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

        private void toolStripDropDownButton1_Click(object sender, EventArgs e)
        {
            MessageBox.Show("dddd");
        }

        private void splitButton演示ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Type t = typeof(RefClass);
            MemberInfo[] minfos = t.GetMembers(BindingFlags.NonPublic| BindingFlags.Instance|BindingFlags.Public|BindingFlags.Static);
            foreach (var item in minfos)
            {

                Console.WriteLine(item.Name);
            }

        }
    }
}
