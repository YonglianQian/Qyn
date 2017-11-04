using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            Button btn = new Button();
           btn.Text = "MyClick";
            btn.Click += button1_Click;
            this.Controls.Add(btn);

        }
        private void button1_Click(object sender,EventArgs e)
        {
            showF2();
        }
        public void showF2()
        {
            Form2 f2 = new Form2();
            f2.Show();
            f2.Form2Click += showF2;
        }
    }
}
