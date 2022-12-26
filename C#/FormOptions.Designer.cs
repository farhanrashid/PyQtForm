/*
 * Created by SharpDevelop.
 * User: Farhan
 * Date: 11/27/2022
 * Time: 12:22 PM
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
namespace PyQtForm
{
	partial class FormOptions
	{
		/// <summary>
		/// Designer variable used to keep track of non-visual components.
		/// </summary>
		private System.ComponentModel.IContainer components = null;
		private System.Windows.Forms.ComboBox cbFormType;
		private System.Windows.Forms.TextBox tbFormName;
		private System.Windows.Forms.TextBox tbFormFolder;
		private System.Windows.Forms.Label lblFormFolder;
		private System.Windows.Forms.Label lblFormName;
		private System.Windows.Forms.Label lblFormType;
		private System.Windows.Forms.FolderBrowserDialog fbDirectory;
		private System.Windows.Forms.Button button1;
		private System.Windows.Forms.CheckBox checkBox1;
		
		/// <summary>
		/// Disposes resources used by the form.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing) {
				if (components != null) {
					components.Dispose();
				}
			}
			base.Dispose(disposing);
		}
		
		/// <summary>
		/// This method is required for Windows Forms designer support.
		/// Do not change the method contents inside the source code editor. The Forms designer might
		/// not be able to load this method if it was changed manually.
		/// </summary>
		private void InitializeComponent()
		{
			this.cbFormType = new System.Windows.Forms.ComboBox();
			this.tbFormName = new System.Windows.Forms.TextBox();
			this.tbFormFolder = new System.Windows.Forms.TextBox();
			this.lblFormFolder = new System.Windows.Forms.Label();
			this.lblFormName = new System.Windows.Forms.Label();
			this.lblFormType = new System.Windows.Forms.Label();
			this.fbDirectory = new System.Windows.Forms.FolderBrowserDialog();
			this.button1 = new System.Windows.Forms.Button();
			this.checkBox1 = new System.Windows.Forms.CheckBox();
			this.SuspendLayout();
			// 
			// cbFormType
			// 
			this.cbFormType.FormattingEnabled = true;
			this.cbFormType.Location = new System.Drawing.Point(103, 61);
			this.cbFormType.Name = "cbFormType";
			this.cbFormType.Size = new System.Drawing.Size(176, 21);
			this.cbFormType.TabIndex = 0;
			// 
			// tbFormName
			// 
			this.tbFormName.Location = new System.Drawing.Point(103, 35);
			this.tbFormName.Name = "tbFormName";
			this.tbFormName.Size = new System.Drawing.Size(173, 20);
			this.tbFormName.TabIndex = 1;
			// 
			// tbFormFolder
			// 
			this.tbFormFolder.Location = new System.Drawing.Point(103, 9);
			this.tbFormFolder.Name = "tbFormFolder";
			this.tbFormFolder.Size = new System.Drawing.Size(313, 20);
			this.tbFormFolder.TabIndex = 2;
			// 
			// lblFormFolder
			// 
			this.lblFormFolder.Location = new System.Drawing.Point(12, 9);
			this.lblFormFolder.Name = "lblFormFolder";
			this.lblFormFolder.Size = new System.Drawing.Size(85, 23);
			this.lblFormFolder.TabIndex = 3;
			this.lblFormFolder.Text = "Form Folder";
			// 
			// lblFormName
			// 
			this.lblFormName.Location = new System.Drawing.Point(12, 38);
			this.lblFormName.Name = "lblFormName";
			this.lblFormName.Size = new System.Drawing.Size(85, 23);
			this.lblFormName.TabIndex = 4;
			this.lblFormName.Text = "Form Name";
			// 
			// lblFormType
			// 
			this.lblFormType.Location = new System.Drawing.Point(12, 64);
			this.lblFormType.Name = "lblFormType";
			this.lblFormType.Size = new System.Drawing.Size(85, 23);
			this.lblFormType.TabIndex = 5;
			this.lblFormType.Text = "Form Type";
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(84, 209);
			this.button1.Name = "button1";
			this.button1.Size = new System.Drawing.Size(82, 29);
			this.button1.TabIndex = 6;
			this.button1.Text = "button1";
			this.button1.UseVisualStyleBackColor = true;
			this.button1.Click += new System.EventHandler(this.Button1Click);
			// 
			// checkBox1
			// 
			this.checkBox1.Location = new System.Drawing.Point(296, 170);
			this.checkBox1.Name = "checkBox1";
			this.checkBox1.Size = new System.Drawing.Size(104, 24);
			this.checkBox1.TabIndex = 7;
			this.checkBox1.Text = "checkBox1";
			this.checkBox1.UseVisualStyleBackColor = true;
			// 
			// FormOptions
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(562, 369);
			this.Controls.Add(this.checkBox1);
			this.Controls.Add(this.button1);
			this.Controls.Add(this.lblFormType);
			this.Controls.Add(this.lblFormName);
			this.Controls.Add(this.lblFormFolder);
			this.Controls.Add(this.tbFormFolder);
			this.Controls.Add(this.tbFormName);
			this.Controls.Add(this.cbFormType);
			this.Name = "FormOptions";
			this.Text = "PyQtForm";
			this.DoubleClick += new System.EventHandler(this.FormOptionsDoubleClick);
			this.ResumeLayout(false);
			this.PerformLayout();

		}
	}
}
