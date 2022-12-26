/*
 * Created by SharpDevelop.
 * User: Farhan
 * Date: 11/27/2022
 * Time: 12:22 PM
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using System.Windows.Forms;

namespace PyQtForm
{
	/// <summary>
	/// Class with program entry point.
	/// </summary>
	internal sealed class Program
	{
		/// <summary>
		/// Program entry point.
		/// </summary>
		[STAThread]
		private static void Main(string[] args)
		{
			Console.WriteLine("test");
			var formoption = new FormOptions();
			formoption.ShowDialog();
			
		}
		
	}
}
